#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FaceToFaceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FaceToFaceData"));
	}

	template <typename T = int32_t> T& ShortCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bEnterNewCodeRoom() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mode_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& room_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
