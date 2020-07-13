#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class IUnityEditorHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "IUnityEditorHelper"));
	}


	template <typename T = bool> T IsPrefab(uintptr_t testObject) {
		return ((T (*)(IUnityEditorHelper*, uintptr_t))(Il2CppBase() + 0x0))(this, testObject);
	}

};

}
