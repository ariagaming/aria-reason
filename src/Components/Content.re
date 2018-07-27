let contentStaticComponent = ReasonReact.statelessComponent("Content");

let createNavButton = () =>
  <div className="nav-button"> <i className="fa fa-pencil-alt" /> </div>;

let make = (~title, ~className="", _children) => {
  ...contentStaticComponent,
  render: _self =>
    <div className=("content " ++ className)>
      _children
      <div className="title"> (ReasonReact.string(title)) </div>
      (createNavButton())
    </div>,
};