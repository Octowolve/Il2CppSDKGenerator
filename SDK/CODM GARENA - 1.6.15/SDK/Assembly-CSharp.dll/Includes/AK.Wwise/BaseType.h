#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class BaseType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "BaseType"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uint32_t> T GetID() {
		return ((T (*)(BaseType*))(Il2CppBase() + 0x4A1F7B4))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BaseType*))(Il2CppBase() + 0x4A1F770))(this);
	}
	template <typename T = bool> T Validate() {
		return ((T (*)(BaseType*))(Il2CppBase() + 0x4A1F7BC))(this);
	}
	template <typename T = void> T Verify(uintptr_t result) {
		return ((T (*)(BaseType*, uintptr_t))(Il2CppBase() + 0x4A1F934))(this, result);
	}

};

}
