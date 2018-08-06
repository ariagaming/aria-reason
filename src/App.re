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
        <Features features />
        <Languages languages />
        <img className="sword" src="/assets/sword.png" />
      </Page>
      <Page> <div> (ReasonReact.string("There we go!!")) </div> </Page>
      <VersionIndicator />
    </div>,
};