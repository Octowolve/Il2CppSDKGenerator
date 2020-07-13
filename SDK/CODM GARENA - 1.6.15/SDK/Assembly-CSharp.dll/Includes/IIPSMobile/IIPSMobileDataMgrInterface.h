#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDataMgrInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDataMgrInterface"));
	}


	template <typename T = bool> T Uninit() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetDataReader() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetDataDownloader(bool openProgressCallBack) {
		return ((T (*)(IIPSMobileDataMgrInterface*, bool))(Il2CppBase() + 0x0))(this, openProgressCallBack);
	}
	template <typename T = uintptr_t> T GetDataQuery() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T MgrGetDataMgrLastError() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint64_t> T MgrGetMemorySize() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T PollCallBack() {
		return ((T (*)(IIPSMobileDataMgrInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
