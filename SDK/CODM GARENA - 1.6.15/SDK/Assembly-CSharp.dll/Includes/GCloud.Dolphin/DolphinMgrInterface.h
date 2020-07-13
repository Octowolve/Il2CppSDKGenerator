#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinMgrInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinMgrInterface"));
	}


	template <typename T = bool> T InitUpdateMgr(uintptr_t updateInfo, bool needFirstExtract, uintptr_t strType) {
		return ((T (*)(DolphinMgrInterface*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, updateInfo, needFirstExtract, strType);
	}
	template <typename T = bool> T UninitUpdateMgr() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T StartUpdateService() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Continue() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T StopUpdateService() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DriveUpdateService() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T GetCurrentDownSpeed() {
		return ((T (*)(DolphinMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetNeedFirstExtract(bool needFirstExtract) {
		return ((T (*)(DolphinMgrInterface*, bool))(Il2CppBase() + 0x0))(this, needFirstExtract);
	}

};

}
