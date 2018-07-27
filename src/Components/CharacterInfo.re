let component = ReasonReact.statelessComponent("CharacterInfo");

let make = _children => {
  ...component,
  render: _self =>
    <div className="character-info">
      <span className="race trigger"> (ReasonReact.string("Human")) </span>
    </div>,
};