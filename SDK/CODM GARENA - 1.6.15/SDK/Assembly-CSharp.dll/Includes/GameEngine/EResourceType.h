#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EResourceType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EResourceType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_GOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_DIAMOND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_STAMINA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_EXPERIENCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_GAMEPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_TEAMPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_WEAPONPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRESOURCE_TYPE_EXPERTPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
