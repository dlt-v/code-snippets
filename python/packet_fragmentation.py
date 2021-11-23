import math


def fragment_packets(mtu, size, header=20):
    max_packet_length = ((mtu - header) // 8) * 8
    packet_number = math.ceil(size / max_packet_length)
    packet_list = []
    offset = 0
    for _packet in range(packet_number):
        tag = 'MF'
        if size // max_packet_length > 0:
            this_packet_size = max_packet_length
            size -= max_packet_length
        elif size % max_packet_length > 0:
            this_packet_size = size % max_packet_length
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
    # MTU, size, header (default = 20)
    result = fragment_packets(576, 2100, 20)

    for packet in result:
        print(
            f'{packet["packet_size"]} @ {packet["offset"]} \t{packet["tag"]}')


if __name__ == '__main__':
    main()
