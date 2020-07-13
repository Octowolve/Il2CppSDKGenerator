#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.GVoice {

class RoomMembers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.GVoice", "RoomMembers"));
	}

	template <typename T = int32_t> T& memberid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& openid() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
