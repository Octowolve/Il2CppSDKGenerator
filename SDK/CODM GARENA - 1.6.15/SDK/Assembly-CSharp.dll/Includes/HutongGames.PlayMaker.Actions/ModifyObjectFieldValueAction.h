#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ModifyObjectFieldValueAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ModifyObjectFieldValueAction"));
	}

	template <typename T = uintptr_t> T& TargetObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TargetEnum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& FieldName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& NewValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ModifyObjectFieldValueAction*))(Il2CppBase() + 0x4D789EC))(this);
	}

};

}
