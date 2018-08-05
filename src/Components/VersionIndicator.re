let contentStaticComponent =
  ReasonReact.statelessComponent("VersionIndicator");

let make = (~version="0.1", _children) => {
  ...contentStaticComponent,
  render: _self =>
    <div className="version-indicator">
      (ReasonReact.string("version: " ++ version))
    </div>,
};