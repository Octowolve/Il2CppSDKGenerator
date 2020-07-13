#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FormatString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FormatString"));
	}

	template <typename T = uintptr_t> T& format() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objectArray() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FormatString*))(Il2CppBase() + 0x5051D6C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FormatString*))(Il2CppBase() + 0x5051D84))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FormatString*))(Il2CppBase() + 0x5052110))(this);
	}
	template <typename T = void> T DoFormatString() {
		return ((T (*)(FormatString*))(Il2CppBase() + 0x5051E54))(this);
	}

};

}
