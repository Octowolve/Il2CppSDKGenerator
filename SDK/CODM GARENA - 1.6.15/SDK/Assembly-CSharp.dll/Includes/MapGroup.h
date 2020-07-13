#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapGroup"));
	}

	template <typename T = uint32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& openType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& openTimeList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& showPirority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bSelect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bIsCouldUse() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uint64_t> T& downloadSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& maxDownloadSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& lastFour() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& bMustDownload() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& currentMapState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ComputeCurrentState(double serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(MapGroup*, double, uintptr_t, int32_t))(Il2CppBase() + 0x41C6E10))(this, serverTime, dateTime, dayOfWeek);
	}

};

}
