open BsReactNative;

type beer = {name: string};
type section = {
  title: string,
  content: string,
};

let sections: array(section) = [|
  {title: "Borg", content: "Ulfur"},
  {title: "Olvisholt", content: "Lemon IPA"},
  {title: "Brooklyn", content: "Sirachi"},
|];

let app = () =>
  <View style=Style.(style([marginTop(Pt(30.)), flex(1.)]))>
    <Accordion
      sections
      renderSectionTitle=(
        (section, _b, _c) =>
        Table.beerDisplayRow(section.title)
      )
      renderHeader=((_section, _b, _c, _d) => Table.beerDisplayRow("Beers"))
      renderContent=(
        (section, _b, _c, _d) => Table.beerDisplayRow(section.content)
      )
    />
  </View>;