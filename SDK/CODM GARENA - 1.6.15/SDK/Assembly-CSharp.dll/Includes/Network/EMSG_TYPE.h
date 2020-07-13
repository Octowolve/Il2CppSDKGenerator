#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EMSGTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EMSG_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eMSG_TYPE_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMSG_TYPE_BOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMSG_TYPE_NPCORGAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMSG_TYPE_NPC_DOOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eMSG_TYPE_NPC_CLONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
