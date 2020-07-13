#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EBRMedicineSettingItemType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EBRMedicineSettingItemType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_SIT_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_SIT_Hemostatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_SIT_TYPE_FirstAidKit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_SIT_TYPE_Adrenaline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
