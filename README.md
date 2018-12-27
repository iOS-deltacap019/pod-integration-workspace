# pod-integration

 To integrate **pods** to some **Xcode project** is straight forward, but to integrate **pods** to existing **workspace or some framework** takes some added steps.

## Set up POD environment

- Type on terminal `sudo gem install cocoapods`

## Install pods to existing Workspace

1. Open project -> Go to File -> Save as workspace
2. Group all your dependency projects parallel to the above project (This is just for organising project).
3. Open terminal and go to directory up to `.workspace` file created in first step or `.xcodeproj` file incase you haven't converted your project to workspace.
4. Type `$pod init` on terminal if your are working with project it will create a  `podFile` .
5. In our case we have already converted our project to workspace and we want to avoid creation of new so we will use `$ touch Podfile` it will create a `podFile` in your workspace.
6. open `podFile` created above and add required pod  dependencies to it with `workspace` pointing to  the `.workspace` file created in *step 3* or it will create new workspace file for the project.
7. Type `$pod install` on terminal and it will download all the pods and configure the project accordingly.
8. You may see a warning like below if you are installing pods to some `framework/ static library`. The warning itself is very clear and if you ignore it and try to run your project  `framework/ static library` will successfully compile as a seperate project but when added to `demoApp `it will throw errors regarding **Header files not found** although pods are installed successfully.
  ```
  Pod installation complete! There are 3 dependencies from the Podfile and 3 total pods installed.
  
  [!] The Podfile contains framework or static library targets (DummyLibraryProject), for which the Podfile does not contain host targets (targets which embed the framework).
  If this project is for doing framework development, you can ignore this message. Otherwise, add a target to the Podfile that embeds these frameworks to make this message go away (e.g. a test target).
  ```
  To solve above compilation errors we need to add pods to both the projects `framework/ static library` and `main app project`(here demoApp) as the later will act as host project for pods.



