let contentStaticComponent =
  ReasonReact.statelessComponent("SecondaryStatistics");

let make = _children => {
  ...contentStaticComponent,
  render: _self =>
    <div className="secondary-statistics">
      <ContentStatic title="hp" value="30" prefix="" postfix="" />
      <ContentStatic title="ap" value="14" prefix="" postfix="" />
      <ContentStatic title="expertise" value="0" prefix="+" postfix="" />
      <ContentStatic title="movement" value="10" prefix="" postfix="ft" />
      <ContentStatic title="initiative" value="0" prefix="-" postfix="" />
      <ContentStatic title="armor" value="10" prefix="-" postfix="%" />
      <ContentStatic title="aura" value="5" prefix="-" postfix="%" />
      <ContentStatic title="ac" value="1" prefix="" postfix="" />
    </div>,
};