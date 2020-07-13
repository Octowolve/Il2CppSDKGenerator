#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ApplicationRunInBackground
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ApplicationRunInBackground"));
	}

	template <typename T = uintptr_t> T& runInBackground() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ApplicationRunInBackground*))(Il2CppBase() + 0x4F2FC54))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ApplicationRunInBackground*))(Il2CppBase() + 0x4F2FC78))(this);
	}

};

}
