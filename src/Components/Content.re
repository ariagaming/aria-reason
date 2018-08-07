let contentStaticComponent = ReasonReact.statelessComponent("Content");

let createNavButton = onClick =>
  <div className="nav-button" onClick>
    <i className="fa fa-pencil-alt" />
  </div>;

let make = (~title, ~className="", ~onClick=?, _children) => {
  ...contentStaticComponent,
  render: _self => {
    let doClick =
      switch (onClick) {
      | None => (_event => ())
      | Some(a) => a
      };

    <div className=("content " ++ className)>
      (ReasonReact.array(_children))
      <div className="title"> (ReasonReact.string(title)) </div>
      (createNavButton(doClick))
    </div>;
  },
};