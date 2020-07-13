#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVector2Length
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVector2Length"));
	}

	template <typename T = uintptr_t> T& vector2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVector2Length*))(Il2CppBase() + 0x4F009E0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVector2Length*))(Il2CppBase() + 0x4F009F4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVector2Length*))(Il2CppBase() + 0x4F00A80))(this);
	}
	template <typename T = void> T DoVectorLength() {
		return ((T (*)(GetVector2Length*))(Il2CppBase() + 0x4F00A20))(this);
	}

};

}
