#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.APM {

class ApmCallBackInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.APM", "ApmCallBackInterface"));
	}


	template <typename T = void> T OnInitContext(bool succcess, Il2CppString* msg) {
		return ((T (*)(ApmCallBackInterface*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, succcess, msg);
	}
	template <typename T = void> T OnMarkLevelLoad(bool succcess, Il2CppString* msg, Il2CppString* sceneName) {
		return ((T (*)(ApmCallBackInterface*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, succcess, msg, sceneName);
	}
	template <typename T = void> T OnMarkLevelLoadCompleted(bool succcess, Il2CppString* msg, Il2CppString* sceneName, int32_t loadedTime) {
		return ((T (*)(ApmCallBackInterface*, bool, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, succcess, msg, sceneName, loadedTime);
	}
	template <typename T = void> T OnMarkLevelFin(bool succcess, Il2CppString* msg, Il2CppString* sceneName, int32_t totalSceneTime, int32_t totalFrames, int32_t maxPss) {
		return ((T (*)(ApmCallBackInterface*, bool, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, succcess, msg, sceneName, totalSceneTime, totalFrames, maxPss);
	}

};

}
