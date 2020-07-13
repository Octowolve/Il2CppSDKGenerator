#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class ExposedPropertyGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "ExposedPropertyGroup"));
	}

	template <typename T = Il2CppDictionary<int32_t, bool>*> static T& expandedDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& expandedLoaded() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& expanded() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_Expanded() {
		return ((T (*)(ExposedPropertyGroup*))(Il2CppBase() + 0x4808268))(this);
	}
	template <typename T = void> T set_Expanded(bool value) {
		return ((T (*)(ExposedPropertyGroup*, bool))(Il2CppBase() + 0x480837C))(this, value);
	}

};

}
