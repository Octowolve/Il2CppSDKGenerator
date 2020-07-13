#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EAISPECIALMOVETYPES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EAI_SPECIALMOVE_TYPES"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_JUMP_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_CLIMB_OVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_JUMP_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_CRAWL_ALONG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_CRAWL_ALONG_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_WALK_THROUGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_FLY_ALONG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eAI_SPECIALMOVE_FIGHT_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
