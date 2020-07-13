#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RollNoticeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RollNoticeData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bLoop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& loopIntervalTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ReceiveTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& NextShowTimeStamp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildNoticeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BuildNoticeData(int32_t i, uintptr_t data) {
		return ((T (*)(RollNoticeData*, int32_t, uintptr_t))(Il2CppBase() + 0x3854EE8))(this, i, data);
	}

};

}
