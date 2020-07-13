#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AEquipOffset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AEquipOffset"));
	}

	template <typename T = uintptr_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_BindID() {
		return ((T (*)(AEquipOffset*))(Il2CppBase() + 0x2B3D73C))(this);
	}
	template <typename T = void> T set_BindID(int32_t value) {
		return ((T (*)(AEquipOffset*, int32_t))(Il2CppBase() + 0x2B3D744))(this, value);
	}

};

}
