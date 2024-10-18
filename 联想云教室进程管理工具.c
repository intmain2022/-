#include <stdio.h>
#include <stdlib.h>

void function1() {

    printf("Killing StudentMain processes...\n");
    system("taskkill /f /im U8DispatchService.exe");
    system("taskkill /f /im U8KeyManagePool.exe");
    system("taskkill /f /im U8MPool.exe");
    system("taskkill /f /im U8SCMPool.exe");
    system("taskkill /f /im U8TaskService.exe");
    system("taskkill /f /im U8WebPool.exe");
    system("taskkill /f /im UFIDA.U8.UAP.ReportService.exe");
    system("taskkill /f /im StudentMain.exe");
    system("taskkill /f /im TabletServer.exe");
    system("taskkill /f /im TabletDriver.exe");
    system("taskkill /f /im GAOMONTablet.exe");
    system("taskkill /f /im tvnserver32.exe");
    system("taskkill /f /im DeploymentAgent.exe");
    system("taskkill /f /im DesktopCheck.exe");
    system("taskkill /f /im PortControl64.exe");
    system("taskkill /f /im AutodeskDesktopApp.exe");
    system("taskkill /f /im WFDeskShow.exe");
    system("taskkill /f /im vncviewer.exe");
    system("taskkill /f /im Start11Srv.exe");
    system("taskkill /f /im Start11_64.exe");
    system("taskkill /f /im WacomHost.exe");
    system("taskkill /f /im Wacom_UpdateUtil.exe");
    system("taskkill /f /im WFBSMlogon.exe");
    system("taskkill /f /im AdAppMgrSvc.exe");
    system("taskkill /f /im msbstpm.exe");
    system("taskkill /f /im ntzd.exe");
    system("taskkill /f /im fandn.exe");
    system("taskkill /f /im WTabletServicePro.exe");
    system("taskkill /f /im XYNTService.exe");
    
    
    const char* filePath1 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\DeploymentAgent.exe";
    const char* filePath2 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\DesktopCheck.exe";
    const char* filePath3 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\tvnserver32.exe";
    const char* filePath4 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\WFDeskShow.exe";
    const char* filePath5 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\vncviewer.exe";
    const char* filePath6 = "C:\\Program Files (x86)\\Stardock\\Start11\\Start11Srv.exe";
    const char* filePath7 = "C:\\Program Files (x86)\\Stardock\\Start11\\Start11_64.exe";
    const char* filePath8 = "C:\\Program Files\\Tablet\\Wacom\\WacomHost.exe";
    const char* filePath9 = "C:\\Program Files\\Tablet\\Wacom\\Wacom_UpdateUtil.exe";
    const char* filePath10 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\WFBSMlogon.exe";
    const char* filePath11 = "C:\\Program Files (x86)\\Autodesk\\Autodesk Desktop App\\AdAppMgrSvc.exe";
    const char* filePath12 = "C:\\Windows\\SysWOW64\\msbstpm.exe";
    const char* filePath13 = "C:\\Windows\\SysWOW64\\ntzd.exe";
    const char* filePath14 = "C:\\Windows\\SysWOW64\\fandn.exe";
    const char* filePath15 = "C:\\Program Files\\Tablet\\Wacom\\WTabletServicePro.exe";
    const char* filePath16 = "C:\\Program Files (x86)\\Lenovo\\联想智能云教室客户端\\XYNTService.exe";

    printf("正在删除指定文件...\n");
    if (remove(filePath1) == 0) {
        printf("Deleted: %s\n", filePath1);
    }
    else {
        perror("未找到 DeploymentAgent.exe");
    }

    if (remove(filePath2) == 0) {
        printf("Deleted: %s\n", filePath2);
    }
    else {
        perror("未找到 DesktopCheck.exe");
    }

    if (remove(filePath3) == 0) {
        printf("Deleted: %s\n", filePath3);
    }
    else {
        perror("未找到 tvnserver32.exe");
    }
    if (remove(filePath4) == 0) {
        printf("Deleted: %s\n", filePath4);
    }
    else {
        perror("未找到 WFDeskShow.exe");
    }
 if (remove(filePath5) == 0) {
        printf("Deleted: %s\n", filePath5);
    }
    else {
        perror("未找到 vncviewer.exe");
    }
    if (remove(filePath6) == 0) {
        printf("Deleted: %s\n", filePath6);
    }
    else {
        perror("未找到 Start11Srv.exe");
    }
     if (remove(filePath7) == 0) {
        printf("Deleted: %s\n", filePath7);
    }
    else {
        perror("未找到 Start11_64.exe");
    }
    if (remove(filePath8) == 0) {
        printf("Deleted: %s\n", filePath8);
    }
    else {
        perror("未找到 WacomHost.exe");
    }
    if (remove(filePath9) == 0) {
        printf("Deleted: %s\n", filePath9);
    }
    else {
        perror("未找到 Wacom_UpdateUtil.exe");
    }
     if (remove(filePath10) == 0) {
        printf("Deleted: %s\n", filePath10);
    }
    else {
        perror("未找到 WFBSMlogon.exe");
    }
    if (remove(filePath11) == 0) {
        printf("Deleted: %s\n", filePath11);
    }
    else {
        perror("未找到 AdAppMgrSvc.exe");
    }
     if (remove(filePath12) == 0) {
        printf("Deleted: %s\n", filePath12);
    }
    else {
        perror("未找到 msbstpm.exe");
    }
    if (remove(filePath13) == 0) {
        printf("Deleted: %s\n", filePath13);
    }
    else {
        perror("未找到 ntzd.exe");
    }
    if (remove(filePath14) == 0) {
        printf("Deleted: %s\n", filePath14);
    }
    else {
        perror("未找到 fandn.exe");
    }
    if (remove(filePath15) == 0) {
        printf("Deleted: %s\n", filePath15);
    }
    else {
        perror("未找到 WTabletServicePro.exe");
    }
    if (remove(filePath16) == 0) {
        printf("Deleted: %s\n", filePath16);
    }
    else {
        perror("未找到 XYNTService.exe");
    }
    printf("Stopping student services...\n");
    system("sc stop \"STUDSRV\"");
    system("sc stop \"UFNet\"");
    system("sc stop \"U8DispatchService\"");
    system("sc stop \"U8KeyManagePool\"");
    system("sc stop \"U8MPool\"");
    system("sc stop \"U8SCMPool\"");
    system("sc stop \"U8TaskService\"");
    system("sc stop \"U8WebPool\"");

    printf("Disabling student services...\n");
    system("sc config \"STUDSRV\" start= disabled");
    system("sc config \"UFNet\" start= disabled");
    system("sc config \"U8DispatchService\" start= disabled");
    system("sc config \"U8KeyManagePool\" start= disabled");
    system("sc config \"U8MPool\" start= disabled");
    system("sc config \"U8SCMPool\" start= disabled");
    system("sc config \"U8TaskService\" start= disabled");
    system("sc config \"U8WebPool\" start= disabled");
    system("sc config \"TightVNC Server\" start= disabled");
    system("sc config \"Autodesk Desktop App Service\" start= disabled");
    
 
    printf("Stopped student monitor successfully! Press any key to exit.\n");
    getchar(); 
}

void function2() {
    printf("Starting StudentMain services...\n");
    printf("Please do not close this window or enter any characters during the process.\n");

    system("sc config \"STUDSRV\" start= auto");
    system("sc config \"UFNet\" start= auto");
    system("sc config \"U8DispatchService\" start= auto");
    system("sc config \"U8KeyManagePool\" start= auto");
    system("sc config \"U8MPool\" start= auto");
    system("sc config \"U8SCMPool\" start= auto");
    system("sc config \"U8TaskService\" start= auto");
    system("sc config \"U8WebPool\" start= auto");

    printf("All services started successfully!\n");
}

int main() {
    int choice;
    printf("******************************\n");
    printf("联想云教室2机房进程管理工具\n");
    printf("By Dylan Chen\n");
    printf("******************************\n");
    printf("1. 杀死StudentMain进程\n");
    printf("2. 重新启动StudentMain进程\n");
    printf("请输入1或2并回车: ");
    scanf_s("%d", &choice);

    if (choice == 1) {
        function1();
    }
    else if (choice == 2) {
        function2();
    }
    else {
        printf("Invalid input. Exiting...\n");
    }

    return 0;
}
