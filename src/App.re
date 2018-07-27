let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="app">
      <Page> <CharacterInfo /> <Statistics /> </Page>
      <Page> <div> (ReasonReact.string("There we go!!")) </div> </Page>
    </div>,
};