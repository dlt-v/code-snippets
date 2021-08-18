import { Child } from './Child';
const Parent = () => {
    return (
        <Child color={"red"} onClick={()=>console.log('Clicked!')}>
            aaaasad
        </Child>
    )
};

export default Parent;