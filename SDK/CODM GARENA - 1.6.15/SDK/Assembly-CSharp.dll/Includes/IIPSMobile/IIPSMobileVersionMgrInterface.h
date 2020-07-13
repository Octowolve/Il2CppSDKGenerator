#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileVersionMgrInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileVersionMgrInterface"));
	}


	template <typename T = bool> T MgrUnitVersionManager() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MgrSetNextStage(bool goonWork) {
		return ((T (*)(IIPSMobileVersionMgrInterface*, bool))(Il2CppBase() + 0x0))(this, goonWork);
	}
	template <typename T = bool> T MgrCheckAppUpdate() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T MgrCancelUpdate() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int16_t> T MgrGetCurDataVersion() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T MgrGetVersionMgrLastError() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint64_t> T MgrGetMemorySize() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T MgrGetActionDownloadSpeed() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MgrPoll() {
		return ((T (*)(IIPSMobileVersionMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T InstallApk(Il2CppString* path) {
		return ((T (*)(IIPSMobileVersionMgrInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}

};

}
