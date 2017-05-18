module Footer = {
  include ReactRe.Component;
  type props = { content: string };
  let name = "Footer";
  let render { props } =>
    <footer>
      (ReactRe.stringToElement props.content)
    </footer>;
};

include ReactRe.CreateComponent Footer;

let createElement ::content => wrapProps { content: content };
