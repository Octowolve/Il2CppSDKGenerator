#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class IApplicationLifecycle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "IApplicationLifecycle"));
	}


	template <typename T = void> T ApplicationPause() {
		return ((T (*)(IApplicationLifecycle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ApplicationResume() {
		return ((T (*)(IApplicationLifecycle*))(Il2CppBase() + 0x0))(this);
	}

};

}
