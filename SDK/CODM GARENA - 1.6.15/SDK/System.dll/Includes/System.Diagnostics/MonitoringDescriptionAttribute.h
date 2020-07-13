#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class MonitoringDescriptionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "MonitoringDescriptionAttribute"));
	}


	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(MonitoringDescriptionAttribute*))(Il2CppBase() + 0x42AC51C))(this);
	}

};

}
