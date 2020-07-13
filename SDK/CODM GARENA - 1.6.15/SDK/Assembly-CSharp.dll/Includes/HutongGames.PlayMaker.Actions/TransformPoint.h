#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TransformPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TransformPoint"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TransformPoint*))(Il2CppBase() + 0x4F19948))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(TransformPoint*))(Il2CppBase() + 0x4F19960))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TransformPoint*))(Il2CppBase() + 0x4F19AF4))(this);
	}
	template <typename T = void> T DoTransformPoint() {
		return ((T (*)(TransformPoint*))(Il2CppBase() + 0x4F1998C))(this);
	}

};

}
