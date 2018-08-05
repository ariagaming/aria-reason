open Defaults;

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="app">
      <Page>
        <CharacterInfo />
        <Statistics />
        <SecondaryStatistics />
        <Skills skills />
        <Resistances resistances />
        <Professions professions />
      </Page>
      <Page> <div> (ReasonReact.string("There we go!!")) </div> </Page>
      <VersionIndicator />
    </div>,
};