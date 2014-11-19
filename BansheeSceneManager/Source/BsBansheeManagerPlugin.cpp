#include "BsBansheeSMPrerequisites.h"
#include "BsBansheeSceneManager.h"

namespace BansheeEngine
{
	/**
	 * @brief	Returns a name of the plugin.
	 */
	extern "C" BS_SM_EXPORT const String& getPluginName()
	{
		static String pluginName = "BansheeSceneManager";
		return pluginName;
	}

	/**
	 * @brief	Entry point to the plugin. Called by the engine when the plugin is loaded.
	 */
	extern "C" BS_SM_EXPORT void* loadPlugin()
	{
		SceneManager::startUp<BansheeSceneManager>();

		return nullptr;
	}

	/**
	 * @brief	Called by the engine when the plugin should be shut down and all of its resources should be released.
	 */
	extern "C" BS_SM_EXPORT void shutdownPlugin()
	{
		SceneManager::shutDown();
	}

	/**
	 * @brief	Exit point of the plugin. Called by the engine just before the plugin is unloaded.
	 */
	extern "C" BS_SM_EXPORT void unloadPlugin()
	{

	}
}