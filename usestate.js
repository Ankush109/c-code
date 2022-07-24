import React,{usestate} from 'react'

function usestate() {
    const{count,setcount}=usestate(0)
  return (
    <div> <button onClick={()=>setcount(count+1)}> count {count}</button> </div>
  )
}

export default usestate