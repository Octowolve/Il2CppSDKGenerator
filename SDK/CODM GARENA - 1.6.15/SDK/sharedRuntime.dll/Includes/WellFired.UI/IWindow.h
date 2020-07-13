#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.UI {

class IWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.UI", "IWindow"));
	}



};

}
