/*

/app: Routes, components, and logic for your application

/app/lib: Functions used in your application, reusable utility and data fetching functions.

/app/ui: UI Components.

/public: Static assets, yaml files.

/scripts: Just a seeding script to be able to work on.

Config Files: next.config.js at the root of application.

Separate UIs for each route using layout.tsx and page.tsx files.

page.tsx is a special Next.js file that exports a React component, and it's required for the route to be accessible. 

To create a nested route, you can nest folders inside each other and add page.tsx files inside them.

layout.tsx is there to create shared attributes between pages.

loading.tsx is there to apply suspense behaviour and the page shown while waiting for dynamic data to load, static data is shown instantly.

Overview file is meant to override the hierarchy behaviour for specific pages (routegroups, does not show on URL path)



*/