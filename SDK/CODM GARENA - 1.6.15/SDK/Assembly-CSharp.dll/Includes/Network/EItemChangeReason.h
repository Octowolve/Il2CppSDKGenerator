#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EItemChangeReason
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EItemChangeReason"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eItemChangeReason_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eItemChangeReason_Merge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eItemChangeReason_DropToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eItemChangeReason_UnEquipPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
