let component = ReasonReact.statelessComponent("Page");

let page = children =>
  ReasonReact.createDomElement(
    "div",
    ~props={"data-size": "A4", "className": "page"},
    children,
  );
let make = _children => {...component, render: _self => page(_children)};