#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIEnemyUpdateType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIEnemyUpdateType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& AI_ENEMY_SEEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AI_ENEMY_TOOK_DAMAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AI_ENEMY_HEARD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
