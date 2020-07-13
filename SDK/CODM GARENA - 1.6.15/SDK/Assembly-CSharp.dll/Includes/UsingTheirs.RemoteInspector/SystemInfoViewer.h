#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class SystemInfoViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "SystemInfoViewer"));
	}

	template <typename T = Il2CppVector2> T& displayResolution() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& updateSystenInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector2> T get_displayResolution() {
		return ((T (*)(SystemInfoViewer*))(Il2CppBase() + 0x48846C4))(this);
	}
	template <typename T = void> T set_displayResolution(Il2CppVector2 value) {
		return ((T (*)(SystemInfoViewer*, Il2CppVector2))(Il2CppBase() + 0x48846D8))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SystemInfoViewer*))(Il2CppBase() + 0x48846E4))(this);
	}

};

}
