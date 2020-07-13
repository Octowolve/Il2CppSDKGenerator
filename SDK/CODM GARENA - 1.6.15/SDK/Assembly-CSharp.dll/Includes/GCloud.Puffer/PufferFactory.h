#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class PufferFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "PufferFactory"));
	}

	template <typename T = uint32_t> static T& InvalidFileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& InvalidTaskId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& lockHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& resManager() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleasePufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x44315D4))(0);
	}
	template <typename T = void> T CreatePufferMgr() {
		return ((T (*)(PufferFactory*))(Il2CppBase() + 0x44318A8))(this);
	}
	template <typename T = uintptr_t> T GetPufferMgr() {
		return ((T (*)(PufferFactory*))(Il2CppBase() + 0x4431A50))(this);
	}
	template <typename T = void> T ReleasePufferMgr() {
		return ((T (*)(PufferFactory*))(Il2CppBase() + 0x4431B20))(this);
	}

};

}
