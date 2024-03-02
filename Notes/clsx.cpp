/*

clsx is used by pagination and status calls.
kindly refer to below example for detailed explanation:

first argument is common, second argument is conditional.
Herein, condition is pathname == link.href, which states that this is the page client is using.
On this case, nav bar paints it blue.

'flex h-[48px] grow items-center justify-center gap-2 rounded-md bg-gray-50 p-3 text-sm font-medium hover:bg-sky-100 hover:text-blue-600 md:flex-none md:justify-start md:p-2 md:px-3',
{normal classnames}
{
    'bg-sky-100 text-blue-600': pathname === link.href, {conditional classnames}
},

*/