# Uncomment the next line to define a global platform for your project

#project 'demoApp/demoApp.xcodeproj'
workspace 'libraryProjectWorskpace.xcworkspace'

platform :ios, '8.0'

# defining mediation pods
def mediation_pods
	pod 'Google-Mobile-Ads-SDK'
	pod 'myTargetSDK'
end

def networking_pods
	pod 'AFNetworking', '~> 3.0'
end

target 'demoApp' do
		#use_frameworks!
		project 'demoApp/demoApp.xcodeproj'
			mediation_pods
			networking_pods
		end

target 'libraryProject' do
		project 'libraryProject/libraryProject.xcodeproj'
		#inherit! :search_paths
			mediation_pods
			networking_pods
		end
