import math


def fragment_packets(mtu, size, ip=20, tcp=0):
    max_packet_length = ((mtu - ip) // 8) * 8
    packet_number = math.ceil(size / max_packet_length)
    packet_list = []
    offset = 0
    print(
        f'MTU: {mtu}\nData size: {size}\nHeader length: {ip}\nMax packet length: {max_packet_length}\nTCP: {bool(tcp)}, {tcp}\n')
    for _packet in range(packet_number):
        tag = 'MF'
        if size // max_packet_length > 0:
            this_packet_size = max_packet_length
            size -= max_packet_length
        elif size % max_packet_length > 0:
            this_packet_size = size % max_packet_length + tcp
            size -= size % max_packet_length
            tag = "LF"

        packet_list.append({
            "packet_size": this_packet_size,
            "offset": offset,
            "tag": tag
        })

        offset += max_packet_length

    return packet_list


def main():
    # MTU, size, header (default = 20), tcp (default = 0)
    result = fragment_packets(296, 1000, 20, 20)

    for packet in result:
        print(
            f'{packet["packet_size"]} @ {packet["offset"]} \t{packet["tag"]}')


if __name__ == '__main__':
    main()
