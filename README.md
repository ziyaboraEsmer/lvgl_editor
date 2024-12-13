# LVGL's UI Editor

This repository is the place for public LVGL Editor related content.

## Introduction

LVGL's UI editor is an under-development tool designed to help UI developers create embedded UIs faster and in a more maintainable way. The main characteristics of this tool are:

- **Component-oriented**: Various elements of the UI can be implemented as reusable components.
- **XML-based**: The components are described in an HTML-like form.
- **Instant preview**: The components can be previewed as you edit them.
- **Figma support**: LVGL's Figma plugin helps to quickly extract styles from any Figma elements.
- **Online preview**: A CI action converts the XML files into a website where they can be previewed.
- **Custom widget creation**: Unlike components, widgets have C logic. You can recompile the editor to make it contain the new widgets' code.
- **C export**: Both components and widgets can be exported to C, enabling seamless integration into your application, just like handwritten code.
- **Runtime XML loading**: Components can be loaded from XML at runtime without recompiling the firmware.

This tool is **developer-centric**, built for those who bring designer-created UIs to life. It’s not a drag-and-drop tool for designers but assumes users are comfortable with writing and managing code. The editor complements your workflow, allowing seamless transitions between generated and handwritten code. Use it where it’s more efficient, and code directly when it’s better suited.

We believe designers should work freely in tools like Figma, focusing on creativity without limitations. LVGL's editor, in turn, helps developers to structure and implement these designs in a maintainable, scalable way. Our goal is to bridge this gap, empowering both designers and developers to excel in their respective roles.

![image](https://github.com/user-attachments/assets/bcc1b7f7-6e54-4c6c-ac69-f2b1a82068ab)

## Get Started

**⚠️ These will apply when v0.1 is relased in January**

1. **Fork this repository** to experiment with its CI actions and online preview features.
2. **Clone your fork** to your local machine.
3. **Download and install the Editor.**
4. **Copy the example Figma design** provided.
5. **Open the editor** and load the example folder.
6. **Edit components**: Open `my_button.xml` and edit it. Save the file (Ctrl+S) to update the preview.
7. **Edit a widget**: Open `slider_box.xml` (a widget) and click "Compile Code" (requires Docker installed). It will comple the C code next to the widget's XML. Feel free to tedit the C code and recompile again.
8. **Check all this togother**.: Open `main_screen.xml`; now the slider box should work.
9. **Play with Figma**: Modify the Figma design and use the plugin to update style properties of the components. 
10. **Try out the online preview**: Commit and push your changes. Wait for the CI to run and check the online preview.
11. Open an issue if you encounter any problems or get stuck. 😊

## Current Status and Future Plans

This is an early preview of the UI editor, so only some core functionalities are supported at this moment. 
The goal is to demonstrate the development direction and gather feedback for adjustments.

**Note**: This version is for preview purposes only and not suitable for production.

### Currently Supported Features:

- Basic built-in widgets (`lv_obj`, `lv_label`, `lv_slider`, `lv_button`, etc.).
- Load XML components at runtime from files or data (part of LVGL as an open-source MIT-licensed feature).
- Style sheets and local styles supporting basic style properties.
- Nest components and widgets at any depth.
- Dynamically instantiate XML components in C.
- Register images and fonts accessible by name in XML (only files are supported; fonts/images are not exported as C).
- Use constants for widget and style properties.
- Define, pass, and use parameters for components.

Please refer to the examples to learn the XML syntax or read [this page](https://docs.lvgl.io/master/details/other-components/xml.html) for more information.

### Future Plans

We aim to release v0.2 in **April 2025** and v0.3 in **July 2025**, which will include:

- XML auto-completion, syntax error highlighting, and common hotkeys (e.g., Ctrl+click to jump to declarations).
- Widget highlighting: Hovering over widgets in the preview will show their size, padding, margins, etc.
- Support for all style properties.
- Support for most LVGL widgets, including complex ones like tabview, chart, span, scale, table, and buttonmatrix.
- MicroPython support.
- Event and subject handling.
- Font manager for exporting fonts as C.
- Image manager for exporting images as C and supporting scaling/color format changes (all configurable via XML).
- Basic translation support.
- Memory monitoring and performance estimation tools.
- Commenting support in the online preview.

## Business Model

During development, everything will be free. After v1.0 (targeted for **Q3 2025**), we plan to introduce the following models (subject to change):

### Free Version:
- No limitations on the number of components.
- No access to the Figma plugin or online preview.
- No support for custom widgets (a.k.a recompiling the editor).
- No multi-language UI translation support.
- Some advanced features may be disabled.

**Target Audience**: Makers and small companies.

### Yearly Subscription
- Access to all editor features (e.g., multi-language support, custom widgets).
- Figma plugin and online preview support.
- Estimated cost: < $10k/year for a floating license.
- Free for open-source projects (requires regular updates to ensure the project remains open-source).

**Target Audience**: Teams with designers and developers requiring collaboration.

### Enterprise Version:
- Plugin support for deep customization (e.g., custom buttons, themes, XML processing, code export hooks).
- Integration with custom applications or CI workflows via CLI.
- Collaborative development, including feature development as a service.
- Custom pricing based on specific needs.

**Target Audience**: Large enterprise companies and vendor requiring custom tools and features.

## Contribution

Just like LVGL, we are developing this tool for you. We want to add the features you need, not just what we think is useful.

Please open an issue in this repository to share your feedback. Your input will help shape the development of LVGL's UI Editor! 

Thank you! ❤️




