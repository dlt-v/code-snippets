import { useState, useRef, useEffect } from "react";

const users = [
    { name: "Sarah", age: 20 },
    { name: "Adam", age: 19 },
    { name: "Patricia", age: 24 },
];
export const UserSearch: React.FC = () => {
    const inputRef = useRef<HTMLInputElement | null>(null);
    const [name, setName] = useState("");
    const [user, setUser] = useState<
        { name: string; age: number } | undefined
    >();
    useEffect(() => {
        if (!inputRef.current) return;
        inputRef.current.focus();
    }, []);

    const onClick = () => {
        const foundUser = users.find((user) => {
            return user.name === name;
        });

        setUser(foundUser);
    };

    return (
        <div>
            User Search
            <input
                ref={inputRef}
                type="text"
                value={name}
                onChange={(e) => setName(e.target.value)}
            />
            <button onClick={onClick}>Search</button>
            <div>
                {user && user.name} {user && user.age}
                {user ? " " : "User not found"}
            </div>
        </div>
    );
};
