import React from 'react';
‍import { Provider, connect } from 'react-redux';
‍import { store, testSlice, someAction } from './store';
‍const { actions } = testSlice;
‍const { otherAction, finalAction } = actions;

const App = ({
  someProperty,
  otherProperty,
  /* ... */
  finalProperty,
  someAction,
  otherAction,
  /* ... */,
  finalAction,
‍}) => (
  <Provider store={store}>‍
    <button
      onClick={() =>
        someAction(1)
      }
      type="button"
    >      Test
    </button>‍
  </Provider>
‍);

const mapStateToProps = state => ({
  someProperty: state.someProperty,
  otherProperty: state.otherProperty,
  /* ... */,
  finalProperty: state.finalProperty,
‍});

export default connect(
  mapStateToProps,
  { someAction, otherAction, /* ... */, finalAction },
‍)(App);
