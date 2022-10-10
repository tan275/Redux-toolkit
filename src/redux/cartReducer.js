//cart reducer
import {createSlice} from '@reduxjs/toolkit'
export const cartReducer=(state=[],action)=>{
    switch(action.type){
        case 'ADD_TO_CART':
            return [...state,action.payload]
        case 'REMOVE_FROM_CART':
            return state.filter((item)=>item.id!==action.payload.id)
        default:
            return state
    }
}
//create slice
export const cartSlice=createSlice({
    name:'cart',
    initialState:[],
    reducers:{
        addToCart:(state,action)=>{
            state.push(action.payload)
        }
    }
})
export const {addToCart}=cartSlice.actions
export default cartSlice.reducer;
