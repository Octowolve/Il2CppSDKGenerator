#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortInfo"));
	}

	template <typename T = int32_t> T& LocalPlayerWeight() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& OnLineWeight() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& InGameWeight() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RoleTypeWeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ActivityWeight_Daily() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ActivityWeight_Weekly() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActivityWeight_Seasonal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PlayerIDWeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& JoinTimeWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
