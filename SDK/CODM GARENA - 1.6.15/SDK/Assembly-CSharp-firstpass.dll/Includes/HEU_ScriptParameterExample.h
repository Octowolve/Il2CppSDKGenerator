#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HEUScriptParameterExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HEU_ScriptParameterExample"));
	}

	template <typename T = uintptr_t> T& _evergreenGameObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _evergreenAsset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _updateRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _scale() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HEUScriptParameterExample*))(Il2CppBase() + 0x4C5F8EC))(this);
	}
	template <typename T = void> T UpdateGravity() {
		return ((T (*)(HEUScriptParameterExample*))(Il2CppBase() + 0x4C5FA50))(this);
	}

};

}
