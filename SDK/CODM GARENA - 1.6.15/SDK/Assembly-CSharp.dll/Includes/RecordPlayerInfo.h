#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecordPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecordPlayerInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& NickName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& PicID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& FrameID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& URL() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
